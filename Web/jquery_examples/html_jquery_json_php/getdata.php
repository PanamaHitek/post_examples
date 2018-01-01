<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "example_database";
$conn = new mysqli($servername, $username, $password, $dbname);
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
$sql = "SELECT * FROM users_list";
$result = $conn->query($sql);
$rows = array();
while($r = mysqli_fetch_assoc($result)) {
    $rows[] = $r;
}
print json_encode($rows);
$conn->close();
?>