/*************************************************************************
 
ADOBE SYSTEMS INCORPORATED
Copyright 2017 Adobe Systems Incorporated
All Rights Reserved.
 
NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance with the
terms of the Adobe license agreement accompanying it.  If you have received this file from a
source other than Adobe, then your use, modification, or distribution of it requires the prior
written permission of Adobe.
 
**************************************************************************/

#import <UIKit/UIKit.h>

@class User;

@interface MapViewController : UIViewController

@property (strong) User *user;

@property (assign) IBOutlet UILabel *lblDestination;

@property (assign) IBOutlet UIButton *btnLab3882;
@property (assign) IBOutlet UIButton *btnLab3881;
@property (assign) IBOutlet UIButton *btnRestrooms;
@property (assign) IBOutlet UIButton *btnCasino;
@property (assign) IBOutlet UIButton *btnBar;
@property (assign) IBOutlet UIButton *btnSecretLounge;

@end
