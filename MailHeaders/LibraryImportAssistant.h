/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "Assistant.h"

@class ActivityMonitor, NSButton, NSProgressIndicator, NSTextField, NSTimer, NSView;

@interface LibraryImportAssistant : Assistant
{
    NSView *introView;
    NSView *patienceView;
    NSView *doneView;
    NSView *errorView;
    NSView *recoveryIntroView;
    NSTextField *mailboxStatusField;
    NSTextField *messageStatusField;
    NSTextField *timeRemainingField;
    NSProgressIndicator *progressBar;
    NSButton *showNewFeaturesButton;
    NSTextField *newFeaturesTextField;
    ActivityMonitor *activityMonitor;
    NSTimer *updateTimer;
    int state;
    BOOL importWasSuccessful;
    BOOL accountsAreNewlyCreated;
}

- (id)initWithAssistentManager:(id)arg1;
- (void)dealloc;
- (void)setAccountsAreNewlyCreated:(BOOL)arg1;
- (void)start;
- (void)stop;
- (void)_permissionErrorSheetDone:(id)arg1 returnCode:(long)arg2 contextInfo:(void *)arg3;
- (BOOL)_checkAccountDirectoryPermissions;
- (void)goForward;
- (id)windowTitle;
- (void)updateProgress:(id)arg1;
- (float)runningAverageWithNewValue:(float)arg1;
- (id)formattedTimeForSeconds:(float)arg1;
- (void)synchronouslyDoTheImport;
- (void)showNewFeatures:(id)arg1;

@end

