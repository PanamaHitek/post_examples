function mouseOver(evt) {
    $("#" + evt.target.id).attr("class", "mouse_over");
}

function mouseOut(evt) {
    $("#" + evt.target.id).attr("class", "mouse_out");
}

function mouseClick(evt) {
    alert(evt.target.id);
}