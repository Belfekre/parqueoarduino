from flask import Flask, render_template, request, Response,session,redirect
import _mysql_connector
import mysql, MySQLdb
import flask_mysqldb

apli=Flask(__name__,template_folder='PLANTILLAS')


""" from datos import datos """


apli.config ['MYSQL_HOST']='localhost'
apli.config ['MYSQL_USER']='root'
apli.config ['MYSQL_PASSWORD']=''
apli.config ['MYSQL_DB']='login'
apli.config ['MYSQL_CURSORCLASS']='DictCursor'
"""Mysql=mysql(apli)"""


@apli.route('/')
def principal():
    return render_template('index.html')


@apli.route('/ESPACIOS')
def espacios():
    return render_template('espacios.html')

""""
@apli.route('/ESPACIOS')
def ESPACIOS():
    ##return apli.datos.from_datos(datos.py)
    return (datos.py)
"""

if __name__ == '__main__':
    apli.run(debug=True, port=5010)
    

