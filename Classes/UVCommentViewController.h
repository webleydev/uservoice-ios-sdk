//
//  UVCommentViewController.h
//  UserVoice
//
//  Created by Austin Taylor on 11/15/12.
//  Copyright (c) 2012 UserVoice Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UVBaseViewController.h"
#import "UVSuggestionDetailsViewController.h"

NS_ASSUME_NONNULL_BEGIN

@class UVSuggestion;

@interface UVCommentViewController : UVBaseViewController<UITextViewDelegate, UVSigninManagerDelegate>

@property (nonatomic,retain) UVSuggestion *suggestion;
@property (nonatomic,nullable) UVSuggestionDetailsViewController *previous;

- (id)initWithSuggestion:(UVSuggestion *)theSuggestion;
- (void)doComment;

@end

NS_ASSUME_NONNULL_END
