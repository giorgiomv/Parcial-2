// =====================================================================
//  plataforma.cpp -- PLANTILLA. Implementen aqui TODAS las funciones de plataforma.h.
//  * No modifiquen plataforma.h.
//  * Aqui NO se usa cin/cout (eso va en main.cpp).
//  * Al DEFINIR productosBajoStock NO repitan el valor por defecto del parametro.
// =====================================================================
#include "plataforma.h"

std::vector<Usuario> cargarUsuarios() {
    // TODO: devolver los 5 usuarios de la tabla del enunciado
    return {};
}

std::vector<Producto> cargarProductos() {
    // TODO: devolver los 50 productos de la tabla del enunciado
    return {};
}

std::vector<Comentario> cargarComentarios() {
    // TODO: devolver los 50 comentarios de la tabla del enunciado
    return {};
}

bool iniciarSesion(const std::vector<Usuario>& usuarios, const std::string& correo,
                   const std::string& contrasena, Usuario& usuarioOut) {
    // TODO
    (void)usuarios; (void)correo; (void)contrasena; (void)usuarioOut;
    return false;
}

std::vector<Producto> productosBajoStock(const std::vector<Producto>& productos, int umbral) {
    // TODO
    (void)productos; (void)umbral;
    return {};
}

std::vector<Comentario> comentariosDesde(const std::vector<Comentario>& comentarios, const std::string& fecha) {
    // TODO
    (void)comentarios; (void)fecha;
    return {};
}

std::vector<std::string> listarUsuariosFormateados(const std::vector<Usuario>& usuarios) {
    // TODO
    (void)usuarios;
    return {};
}

int siguienteIdCarrito(const std::vector<CarritoDeCompras>& carritos) {
    // TODO
    (void)carritos;
    return 0;
}

ResultadoCarrito agregarAlCarrito(std::vector<CarritoDeCompras>& carritos, std::vector<Producto>& productos,
                                  const Usuario& usuario, int idProducto) {
    // TODO
    (void)carritos; (void)productos; (void)usuario; (void)idProducto;
    return CARRITO_PRODUCTO_INVALIDO;
}

std::vector<Producto> listarProductosCarrito(const std::vector<CarritoDeCompras>& carritos, int idCarrito) {
    // TODO
    (void)carritos; (void)idCarrito;
    return {};
}
