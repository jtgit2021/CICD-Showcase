pipeline {
    agent {
        label 'gcc'  // This tells Jenkins to use a node with the 'gcc' label
    }
    stages {
        stage('Clone') {
            steps {
                echo "Cloning repository..."
                git branch: 'main', url: 'https://github.com/jtgit2021/CICD-Showcase'
            }
        }
        stage('Build') {
            steps {
                echo "Building.."
                // Use 'dir' to change the working directory for this stage (if necessary)
                dir('My_Program') {
                    sh 'make'
                }
                sh '''
                echo "doing build stuff.."
                '''
            }
        }
        stage('Test') {
            steps {
                echo "Testing.."
                sh '''
                echo "doing test stuff.."
                '''
            }
        }
        stage('Deliver') {
            steps {
                echo 'Deliver....'
                sh '''
                echo "doing delivery stuff.."
                '''
            }
        }
    }
}
