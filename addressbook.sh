echo "Address Book"
echo "Enter yout option"
echo "1.Add record"
echo "2.List record"
echo "3.Search record"
echo "4.Delete record"

read option
case "$option" in
	"1")	echo "add record"
			./add.sh
	;;
	"2" ) cat phoneBook.txt;;
	"3" )	./search.sh;;
	"4" ) ./delete.sh;;
esac
