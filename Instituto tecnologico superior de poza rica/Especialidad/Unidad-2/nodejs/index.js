const express = require("express");
const cors = require('cors');
const { oConn } = require('./db/conexion');

//levantar el servidor
const app = express();
app.use(cors);
app.use(express.json);
oConn();
app.use('/api/materias/', require('./rutas/materias'));


app.listen(3001, () => {
    console.log("En linea puerto 3001");
})