size=$(ls -l | tr -s ' ' | grep '^-' | cut -d' ' -f5)
name=$(ls -l | tr -s ' ' | grep '^-' | cut -d' ' -f9)

if [ $# = 0 ]; then
    echo "Usage: find-large-files.sh <size>"
    exit 1
fi
for i in $result; do
    echo $i
done