from flask import Flask, render_template, request
from lxml import html
import requests

app = Flask(__name__)
page = requests.get('https://www.indiabix.com/online-test/aptitude-test/4')
tree = html.fromstring(page.content)
answers = tree.xpath('//span[@class="ib-dgray ib-bold"]/text()')

@app.route('/')
def home():
	return render_template("index.html")

@app.route('/uttor')
def uttors():
    return render_template("uttors.html", answers=answers)
