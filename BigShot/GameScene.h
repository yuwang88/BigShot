//
//  GameScene.h
//  BigShot
//
//  Created by Kasajima Yasuo on 11/11/03.
//  Copyright 2011 kyoto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

enum{
  kTagZIndexTitleScene = 100,  
};

@class Target;

@interface GameScene : CCLayer {
    // 操作関係
    BOOL _touchEnable;
    
    // ターゲット関係
    Target *_targetLeft;
    Target *_targetRight;
    
    // ゲームサイクル関係
    CCLabelTTF *_timerLabel;
    float _timer;
    
    // スコア関係
    CCLabelTTF *_highScoreLabel;
    CCLabelTTF *_scoreLabel;
    int _highScore;
    int _nowScore;
}
+(id)scene;
+(GameScene*) sharedGameScene;
// ゲームサイクル関係
- (void)gameStart;
- (void)updateTimer;
- (void)gameOver;

// ターゲット関係
- (void)setTarget;
- (void)touchRightOrNot:(BOOL)boolean;

// スコア関係
-(void)setScore;
-(void)updateScore:(int)score;
-(void)setHighScore:(int)score;
@end
