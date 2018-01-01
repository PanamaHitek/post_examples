$(function () {
    $("#svg_container").load('images/interactive.svg', function (response) {
        if (!response) {
            $(this).html('<strong>Error cargando el SVG</strong>');
        }
    });    
});