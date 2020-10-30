const express = require("express");
//const cors = require('cors');
const { oConn } = require('./db/conexion');

//levantar el servidor
const app = express();

app.use(express.json);
oConn();
app.use('api/materias', require('./rutas/rutas'));


app.listen(3000, () => {
    console.log("En linea puerto 3000");
})