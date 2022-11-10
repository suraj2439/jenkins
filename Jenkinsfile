pipeline {
    agent any
    stages {
        stage('Build'){
            steps {
                echo 'Executing Makefile'
                sh 'make'
                sh './a.out'
            }
        }
    }
}
