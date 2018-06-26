jQuery(document).ready(function($) {
    if (sessionStorage.getItem("name")== null && sessionStorage.getItem("lastname")== null  && sessionStorage.getItem("gender")== null) {
        $("#myModal").modal('show');
    } else {
        load();
    }
     if (sessionStorage.getItem("area")) {
        var res = sessionStorage.getItem("area");
        $("#area").html(res);
    }
  });
function newpage() {  
    if(document.getElementById('male').checked) {
        $("#info").html("Mr.");
    } 
    if(document.getElementById('female').checked) {
        $("#info").html("Mrs.");
    }
    $("#info").append(" " + $("#name").val() + " ");
    $("#info").append($("#lastname").val());
    save();
}
 function addFunction() {
     var add = "Address: " + $("#address").val();
     var cty = "City: " + $("#city").val(); 
     var co  = "Country: " + $("#country").val(); 
     var ph  = "Phone: " + $("#phone").val(); 
     var nm  = "Name: " + $("#name1").val(); 
     var snm = "Lastname: " + $("#lastname1").val();       
     var arr = [add,cty,co,ph,nm,snm];
        var content = "<table>"
         for(i=0; i<6; i++){
             content += '<tr><td>' + arr[i] + '</td></tr>';
         }
         content += "</table>"
         $('#area').append(content); 
         sessionStorage.setItem("area",  $("#area").html());
     }
function load() {
        var name = sessionStorage.getItem("name");
        var lastname = sessionStorage.getItem("lastname");
        if (sessionStorage.getItem("gender") == "Male") {
            $("#modal").html("Mr.");
        } else {
            $("#modal").html("Mrs.");
        }
        $("#modal").text($("#modal").html() + " " + name + " " + lastname);

}
function save() {
    if ($("#male").checked) {
        gender = "Male";
    }
    else {
        gender = "Female";
    }
    sessionStorage.setItem("name", $("#name").val());
    sessionStorage.setItem("lastname", $("#lastname").val());
    sessionStorage.setItem("gender", gender);
    load();
}
