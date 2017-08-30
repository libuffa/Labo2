import Prenda.*

object sacachispas {
	var leyenda = 'Sacachispas'
	var resistenciaMinima = 9

	method aceptacion(camiseta) {
		return camiseta.miResistencia() > resistenciaMinima
	}
}

object sanMiguel {
	var leyenda = 'San Miguel'
	var colorAceptado = 'verde'
	
	method aceptacion(camiseta) {
		return camiseta.color() == colorAceptado
	}
}