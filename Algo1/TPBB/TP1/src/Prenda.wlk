import Cliente.*

object prenda {

	method gradoResistencia(camiseta) {
		return camiseta.material() + self.resistenciaRefuerzos(camiseta) *
		self.resistenciaCostura(camiseta)
	}

	method resistenciaRefuerzos(camiseta) {
		return 0.5 * camiseta.cantRefuerzos()
	}
	method resistenciaCostura(camiseta) {
		return ( 0.2 * camiseta.costuraExtra() ) + 1
	}
}

object camiseta1 {
	var poliester = 4
	var cantRefuerzos = 2
	var costuraExtra = 3
	var color = 'verde'

	method miResistencia() {
		return prenda.gradoResistencia(self)
	}

	method material() {
		return poliester
	}

	method cantRefuerzos() {
		return cantRefuerzos
	}
	method costuraExtra() {
		return costuraExtra
	}
	method color() {
		return color
	}
}

object camiseta2 {
	var dryfit = 9
	var cantRefuerzos = 5
	var costuraExtra = 0
	var color = 'rojo'

	method miResistencia() {
		return prenda.gradoResistencia(self)
	}

	method material() {
		return dryfit
	}

	method cantRefuerzos() {
		return cantRefuerzos
	}
	method costuraExtra() {
		return costuraExtra
	}
	method color() {
		return color
	}
}