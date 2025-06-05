#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(800, 600), "Survival Game") {}

void Game::run() {
    sf::Clock clock;
    while (mWindow.isOpen()) {
        processEvents();
        sf::Time delta = clock.restart();
        update(delta);
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            mWindow.close();
    }
}

void Game::update(sf::Time) {
    // TODO: update game state
}

void Game::render() {
    mWindow.clear();
    // TODO: draw things
    mWindow.display();
}
