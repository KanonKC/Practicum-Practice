NAME="CPE Server"
PORT=2233
ADMIN=admin

if [ $# = 1 ] ; then
    . ./$1
fi

echo "Start server with the following settings:"
echo "NAME = $NAME"
echo "PORT = $PORT"
echo "ADMIN = $ADMIN"