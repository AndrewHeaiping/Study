<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>七夕</title>
</head>
<body>
    <!-- 方法一 -->
    <select name="" id="">
        <?php for($i=1988;$i<2017;$i++){ ?>
            <option value=""><?php echo $i ?> </option>
        <?php } ?>
    </select>

    <!-- 方法二 -->

    <?php 
        echo "<select>";

        for($i=1988;$i<2017;$i++){
            echo "<option>";
            echo $i;
            echo "</option>";

        }
        echo "</select>";
    ?>
</body>
</html>