import cs50
import csv

from flask import Flask, jsonify, redirect, render_template, request, url_for

# Configure application
app = Flask(__name__)

# Reload templates when they are changed
app.config["TEMPLATES_AUTO_RELOAD"] = True


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

    with open('survey.csv', 'a', newline='') as csvfile:
        spamwriter = csv.writer(csvfile)
        spamwriter.writerow([name, house, position])

    return redirect('sheet')


@app.route("/sheet", methods=["GET"])
def get_sheet():
    rows = []
    with open('survey.csv', newline='') as csvfile:
        spamreader = csv.reader(csvfile)
        for row in spamreader:
            rows.append(row)

    if not rows:
        return render_template("error.html", message="TODO")

    return render_template("sheet.html", rows = rows)
