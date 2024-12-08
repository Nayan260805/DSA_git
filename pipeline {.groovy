pipeline {
    agent any
    stages {
        stage('Print Name') {
            steps {
                echo 'Nayan Pillewar' // Replace with your name
            }
        }
        stage('Print Roll Number') {
            steps {
                echo 'Roll Number: B-38' // Replace with your roll number
            }
        }
        stage('Print Section') {
            steps {
                echo 'Section: B' // Replace with your section
            }
        }
        stage('Print College Name') {
            steps {
                echo 'College: Shri Ramdeobaba College of Engineering and Management.' // Replace with your college name
            }
        }
    }
}
