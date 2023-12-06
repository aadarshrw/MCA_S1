<?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $dbname = "MCA_S1";

    $conn = new mysqli($servername,$username,$password,$dbname);

    if($conn->connect_error)
    {
        echo "could not connect";
    }
    else
    {
        $sql = "ALTER TABLE Products ADD manufactname varchar(25)";
        if(mysqli_query($conn,$sql) == TRUE)
        {
            echo "<script>alert('Table altered successfully!! Be sure to update the form too!!');</script>";
        }
    }
?>