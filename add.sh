echo "Enter Name"
read name
echo "Enter Mobile"
read mono
#addressBook = "phoneBook.txt"
#echo $name >phoneBook.txt
cat <<EOT >> phoneBook.txt
#echo "Hello"
$name 	$mono
EOT
