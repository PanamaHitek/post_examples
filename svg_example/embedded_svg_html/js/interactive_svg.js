$(function () {
    $("#stage").load('images/interactive.svg', function (response) {
        if (!response) {
            $(this).html('<strong>Error cargando el SVG</strong>');
        }
    });
});