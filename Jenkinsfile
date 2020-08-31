pipeline {
  agent any
  stages {
    stage('echo') {
      steps {
        withEnv(['JENKINS_NODE_COOKIE=dontkillme']) {
          sh 'echo 2222222'
        }
      }
    }

  }
}
