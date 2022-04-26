file=$(ls -l | tr -s ' ' |cut -d' ' -f1,9 | tr ' ' ',')
#echo $file
for i in $file;do
        t=$(echo $i|cut -d',' -f1)
        name=$(echo $i|cut -d',' -f2)
        echo "i=$t j=$name"
        if  grep -q 'x' $t && $(head -1 $name | grep -q 'bin/python') ;then
                echo $name
        fi
done