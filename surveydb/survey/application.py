import sqlite3

from flask import Flask, jsonify, redirect, render_template, request, url_for

# Configure application
app = Flask(__name__)

# Reload templates when they are changed
app.config["TEMPLATES_AUTO_RELOAD"] = True

conn = sqlite3.connect('survey.db')

@app.after_request
def after_request(response):
    """Disable caching"""
    response.headers["Cache-Control"] = "no-cache, no-store, must-revalidate"
    response.headers["Expires"] = 0
    response.headers["Pragma"] = "no-cache"
    return response


@app.route("/", methods=["GET"])
def get_index():
    return redirect("/form")


@app.route("/form", methods=["GET"])
def get_form():
    return render_template("form.html")


@app.route("/form", methods=["POST"])
def post_form():
    name = request.form.get('name')
    house = request.form.get('house')
    position = request.form.get('position')

    if not name or not house or not position:
        return render_template("error.html", message="you fucked up")

    c = conn.cursor()
    c.execute("INSERT INTO players (name, house, position) VALUES ('" + name + "', '" + house + "', '" + position + "')")
    conn.commit()

    return redirect('sheet')


@app.route("/sheet", methods=["GET"])
def get_sheet():
    c = conn.cursor()
    rows = c.execute("SELECT * FROM players").fetchall()
    # print(rows)

    if not rows:
        return render_template("error.html", message="TODO")

    return render_template("sheet.html", rows = rows)
