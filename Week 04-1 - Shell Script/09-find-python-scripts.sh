for i in $(ls -l | tr -s ' ' | cut -d' ' -f1,9 | tr ' ' :); do
    type=$(echo $i | cut -d: -f1)
    filename=$(echo $i | cut -d: -f2)

    if echo $type | grep -q -v ^d && echo $type | grep -q x$ && head -1 $filename | grep -q 'bin/python' ; then
        echo $filename
    fi
done