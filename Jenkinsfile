pipeline {
  agent any
  stages {
    stage('echo') {
      agent {
        node {
          label 'littlebear_mac'
        }

      }
      steps {
        sh 'mono'
      }
    }

  }
}