from flask import Flask
app = Flask(__name__)

@app.route('/<name>')
def hello_name(name):
    return 'Hello %s!' % name

@app.route('/hello')
def hello_world():
    return 'Hello World!'

if __name__ == '__main__':
    app.run(debug = True)
