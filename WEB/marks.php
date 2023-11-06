<html>
    <head>
        <style>
            div
            {
                font-family: sans-serif;
                font-size: 24;
                position: absolute;
                top: 33%;
                left: 41%;
                padding: 40px;
                background: #F0F0F0;
            }
            table
            {
                text-align: center;
            }
        </style>
    </head>
</html>
<?php
    $name = $_POST['name'];
    $roll = $_POST['roll'];
    $mark1 = $_POST['mark1'];
    $mark2 = $_POST['mark2'];
    $mark3 = $_POST['mark3'];
    $mark4 = $_POST['mark4'];

    $stud = array("Name" => $name, "RollNo" => $roll, "Mark1" => $mark1, "Mark2" => $mark2, "Mark3" => $mark3, "Mark4" => $mark4,);
    echo "<div><table><tr><td colspan="."2"."><h2>Student Details</h2></td></tr>";
    foreach($stud as $v=>$f)
    {
        echo "<tr>
                <td><b>".$v.": </b></td>
                <td>".$f."</td>
             </tr>";
    }
    echo "</table></div>";  
?>