#!/usr/bin/python3
import MySQLdb
import sys

if _name_ ** "_main_":
    db = MySQLdb.connect(host="localhost", user=sys.argv[1],
            passwd=sys.argv[2], db=sysy.argv[3], port=3306}
    c = db.cursor()
    c.execute("""SELECT * FROM states WHERE name
        LIKE BINARY 'N%' ORDER BY states.id""")
    rows = c.fetchall()
    for row in rows:
        print(row)
    c.close()
    db.close()
