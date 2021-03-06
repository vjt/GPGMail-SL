/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSButton, NSProgressIndicator, NSTextField;

@interface DynamicErrorWindowController : NSWindowController
{
    NSTextField *_message;
    NSTextField *_explanation;
    NSButton *_leftButton;
    NSProgressIndicator *_progressIndicator;
    NSButton *_rightButton;
    NSButton *_helpButton;
    int _diagnosisCode;
    float _distanceToRightEdge;
    float _distanceBetweenButtons;
    float _distanceToBottomEdge;
    float _distanceFromProgresBarToButtons;
    float _progressIndicatorHeight;
    id <DynamicErrorWindowDelegate> _delegate;
}

- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)updateTextFieldHeightForNewContent:(id)arg1;
- (void)updateTextField:(id)arg1 withText:(id)arg2 belowControl:(id)arg3;
- (void)collectBasicWindowMetrics;
- (void)relocateButton:(id)arg1 relativeTo:(float)arg2;
- (void)awakeFromNib;
- (void)setDelegate:(id)arg1;
- (void)updateWindowLayout;
- (void)errorDiagnosedAs:(int)arg1;
- (void)leftActionSelected:(id)arg1;
- (void)rightActionSelected:(id)arg1;

@end

