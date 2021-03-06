#include "gamerenderer.h"

GameRenderer::GameRenderer(QObject *parent) : QObject(parent)
{

}

GameRenderer::GameRenderer(OpenGLWindow *glWindow): m_gameView(glWindow)
{

}


void GameRenderer::setRenderView(OpenGLWindow * newGameView){
    m_gameView = newGameView;
}

void GameRenderer::launchGame(){
    //m_gameView->showFullScreen();
    m_gameView->show();
}

void GameRenderer::exitGame(){
    m_gameView->close();
    emit beginExit();
}
