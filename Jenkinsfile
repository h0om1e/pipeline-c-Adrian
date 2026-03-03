pipeline {
    agent any

    stages {

        stage('Clonación') {
            steps {
                echo 'Clonando el repositorio remoto...'
                checkout scm
            }
        }

        stage('Compilación') {
            steps {
                echo 'Compilando el proyecto...'
                sh '''
                    set -e
                    gcc -Wall -Werror -o app main.c app.c
                '''
            }
        }

        stage('Tests') {
            steps {
                echo 'Realizando Pruebas Unitarias...'
                sh '''
                    set -e
                    gcc -Wall -Werror -o test_app test_app.c app.c
                    ./test_app
                '''
            }
        }

        stage('Despliegue') {
            steps {
                echo 'En un futuro desplegaremos la aplicación!!!'
            }
        }
    }
}
