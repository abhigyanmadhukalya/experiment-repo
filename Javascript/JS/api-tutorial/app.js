const express = require('express');
const app = express();
const movieList = require("./movies.json");
const port = 3000;

app.get('/', (req, res) => {
  res.send('Hello World')
});

app.get("/list_movies", (req, res) => {
  res.setHeader("Access-Control-Allow-Origin", "*")
  res.send(movieList)
});

app.listen(port, () => {
  console.log('Example app listening on port ${port}')
});
