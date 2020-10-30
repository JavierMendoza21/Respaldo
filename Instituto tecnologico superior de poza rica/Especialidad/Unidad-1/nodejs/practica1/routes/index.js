var express = require('express');
var router = express.Router();
var mongo = require('mongodb');

/* GET home page. */
router.get('/', function(req, res, next) {
    res.render('index', { title: 'Express' });
});

router.post('/iniciar', function(req, res) {
    /** Aqui mando los datos a mongoDB**/
    const name = req.body.name;
    const pass = req.body.pass;

    console.log(name)
    var url = "mongodb+srv://admin:100Alexis@cluster0.qhag3.mongodb.net/pruebaDBMonogo?retryWrites=true&w=majority";

    var MongoClient = mongo.MongoClient;

    var mongoN = mongo.MongoClient.connect(url, {
            useNewUrlParser: true,
            useUnifiedTopology: true
        })
        .then((database) => {
            db = database.db("pruebaDBMonogo");
            db.collection('usuario').insertOne({ nombre: name, contraseña: pass }, (error, resultado) => {
                if (error) {
                    console.log(error);
                    res.send("Error al insertar");
                }
                res.send("Inserccion exitosa");
            })

        })
        .catch(err => console.error("An error has occured", err));





    //console.log("se inicio");
    res.render("index");
});



module.exports = router;