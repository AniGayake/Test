echo "Delete the record"
read query
#sed '	$d' new.txt
#sed '${/$query/d;}' phoneBook.txt
sed -i "0,/$query/{/$query/d;}" phoneBook.txt