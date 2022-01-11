filename=$1

shift

for i in $@; do
    count=$(cut -d, -f2 $filename | grep ^$i$ | wc -l)
    echo "IP $i accessed $count time(s)"
done

# กุรันในคอมตัวเองไม่ได้ WTF