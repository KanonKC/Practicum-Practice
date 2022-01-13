if [ $# != 1 ]; then
    echo "Usage: find-large-files.sh <size>"
    exit 1
fi

for i in $(ls -l | tr -s ' ' | cut -d' ' -f5,9 | tr ' ' ':'); do
    size=$(echo "$i" | cut -d: -f1)
    filename=$(echo "$i" | cut -d: -f2)
    if [ $((size)) -ge $1 ]; then
        echo $filename
    fi
done