<html>
	<head>
		<title>MACE | Session Marks</title>
		<script lang="javascript">
		</script>
		<style>
			body
			{
				font-family: sans-serif;
			}
			.textboxes
			{
				border: 3px;
				background-color: #F0F0F0;
				border-radius: 10px;
				width: 300px;
				height: 50px;
			}
			b
			{
				padding: 2px 2px 2px 2px;
			}
			input[type="submit"]
			{
				border-radius: 10px;
				width: 170px;
				height: 40px;
				border: 3px;
				background-color: grey;
				color: white;
			}
			input[type="submit"]:hover
			{
				background-color: black;
				color: white;
			}
			input[type="reset"]
			{
				border-radius: 10px;
				width: 170px;
				height: 40px;
				border: 3px;
				background-color: grey;
				color: white;
			}
			input[type="reset"]:hover
			{
				background-color: black;
				color: white;
			}
		</style>
	</head>
	<body style="background: #F0F0F0;">
		<form action="marks.php" method="post">
		<div style="background: white; border-radius: 10px; position: absolute; top:19%; right:38%; width:25%; text-align:center;">
			<h1>Student Data</h1><br>
			<b>Name:&nbsp;&nbsp;</b>
			<input class="textboxes" type="text" name="name" placeholder=" Please enter your name"><br><br>
			<b>Rollno:&nbsp;</b>
			<input class="textboxes" type="number" name="roll" placeholder=" Please enter your roll number"><br><br>
			<b>Marks:&nbsp;</b>
			<input class="textboxes" type="number" name="mark1" placeholder=" Mark 1"><br><br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<input class="textboxes" type="number" name="mark2" placeholder=" Mark 2"><br><br>
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<input class="textboxes" type="number" name="mark3" placeholder=" Mark 3"><br><br>
            &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<input class="textboxes" type="number" name="mark4" placeholder=" Mark 4"><br><br>
			<br>
			<input type="submit" value="Submit">
			&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<input type="reset" value="Clear">
			<br><br><br>
		</div>
		</form>
	</body>
</html>
