<html>
    <head>
        <title>Items Purchased</title>
        <style>
            body
            {
                font-family: sans-serif;
                background: 
            }
            div
            {
                background: grey;
                position: absolute;
                top: 23%;
                left: 34%;
                width: 530px;
                padding: 25px;
                text-align: center;
                border-radius: 40px;
            }
            input[type="text"],[type="number"]
            {
                width: 260px;
                height: 50px;
                border: none;
                border-radius: 10px;
            }
            input[type="submit"],[type="reset"]
            {
                border: none;
                background: black;
                color: white;
                width: 150px;
                height: 50px;
                border-radius: 10px;
            }
            input[type="submit"]:hover,[type="reset"]:hover
            {
                background: white;
                color: black;
            }
        </style>
    </head>
    <body>
        <div>
            <h2>ITEMS</h2>
            <form action="backendofbill.php" method="post">
            <table>
                <tr>
                    <th>Item</th>
                    <th>Price</th>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr>
                    <td><input type="text" name="item1"></td>
                    <td><input type="number" name="price1"></td>
                </tr>
                <tr>
                </tr>
                <tr>
                    <td><input type="text" name="item2"></td>
                    <td><input type="number" name="price2"></td>
                </tr>
                <tr>
                </tr>
                <tr>
                    <td><input type="text" name="item3"></td>
                    <td><input type="number" name="price3"></td>
                </tr>
                <tr>
                </tr>
                <tr>
                    <td><input type="text" name="item4"></td>
                    <td><input type="number" name="price4"></td>
                </tr>
                <tr>
                </tr>
                <tr>
                    <td><input type="text" name="item5"></td>
                    <td><input type="number" name="price5"></td>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr>
                </tr>
                <tr align="center">
                    <td><input type="submit" value="Purchase"></td>
                    <td><input type="reset" value="Clear"></td>
                </tr>
            </table>
            </form>
        </div>
    </body>
</html>