//
//  ViewController.h
//  TestScrollView
//
//  Created by richsjeson on 17/1/17.
//  Copyright © 2017年 nd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TransferSpeedImageScrollView.h"
#import "TransferSpeedImageView.h"

@interface ViewController : UIViewController<TransferSpeedImageScrollViewDelegate>

@property(nonatomic,strong) TransferSpeedImageScrollView * mPhotoScrollView;

@end

