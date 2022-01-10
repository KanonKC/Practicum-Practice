for i in $@; do
    count=$(cut -d',' -f2 sample.log | grep ^$i.$ | wc -l)
    echo "IP $i accessed $count time(s)"
done