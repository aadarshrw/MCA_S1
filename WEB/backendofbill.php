<html>
    <head>
        <style>
            div
            {
                position: absolute;
                top: 28%;
                left: 41%;
                background-color: grey;
                width: 200px;
                height: 310px;
                border-radius: 20px;
            }
            table
            {
                padding-left: 40px;
                padding-right: 40px;
                font-size: 24;
                text-align: center;
                font-family: sans-serif;
            }
            h2
            {
                align-items: center;
                font-family: sans-serif;
            }
        </style>
    </head>
</html>
<?php
    $item1 = $_POST['item1'];
    $item2 = $_POST['item2'];
    $item3 = $_POST['item3'];
    $item4 = $_POST['item4'];
    $item5 = $_POST['item5'];
    $price1 = $_POST['price1'];
    $price2 = $_POST['price2'];
    $price3 = $_POST['price3'];
    $price4 = $_POST['price4'];
    $price5 = $_POST['price5'];
    
    $Total = $price1+$price2+$price3+$price4+$price5;
    
    echo "
    <div>
    <center><h2>Bill</h2></center>
    <table>
        <tr>
            <th>Item</th>
            <th>price</th>
        </tr>
        <tr>
            <td>".$item1."</td>
            <td>".$price1."</td>
        </tr>
        <tr>
            <td>".$item2."</td>
            <td>".$price2."</td>
        </tr>
        <tr>
            <td>".$item3."</td>
            <td>".$price3."</td>
        </tr>
        <tr>
            <td>".$item4."</td>
            <td>".$price4."</td>
        </tr>
        <tr>
            <td>".$item5."</td>
            <td>".$price5."</td>
        </tr>
        <tr>
            <td><b>Total</b></td>
            <td><b>".$Total."</b></td>
    </table>
    </div>";
?>