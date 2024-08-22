/*
* COPYRIGHT © 2024 RIBBON COMMUNICATIONS OPERATING COMPANY, INC. ALL RIGHTS RESERVED.
* This publication and the information contained herein is the property of Ribbon
* and may not be copied, reproduced or distributed in any form or by any means without
* the prior written permission of Ribbon.
*
* THIS PUBLICATION IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
* PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
* FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
* OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE PUBLICATION OR ITS USE.
*
* MobileSDKAnonymous.h
*
* @version: 6.29.0
*
*/

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double MobileSDKVersionNumber;

FOUNDATION_EXPORT const unsigned char MobileSDKVersionString[];

//Call
#import <MobileSDKAnonymous/SMCallDelegate.h>
#import <MobileSDKAnonymous/SMCallServiceDelegate.h>
#import <MobileSDKAnonymous/SMCallDelegate.h>
#import <MobileSDKAnonymous/SMOutgoingCallDelegate.h>
#import <MobileSDKAnonymous/SMCallApplicationDelegate.h>
#import <MobileSDKAnonymous/SMCallLogServiceDelegate.h>
#import <MobileSDKAnonymous/SMCallTypes.h>
#import <MobileSDKAnonymous/SMCallState.h>
#import <MobileSDKAnonymous/SMMediaAttributes.h>
#import <MobileSDKAnonymous/SMVideoSourceTypes.h>
#import <MobileSDKAnonymous/SMAudioSourceTypes.h>

//ServiceProvider
#import <MobileSDKAnonymous/SMServiceProvider.h>

//Utilities
#import <MobileSDKAnonymous/SMMobileError.h>
#import <MobileSDKAnonymous/SMConfiguration.h>
#import <MobileSDKAnonymous/SMCameraModes.h>
#import <MobileSDKAnonymous/SMLoggingDelegate.h>
#import <MobileSDKAnonymous/SMUriAddress.h>
#import <MobileSDKAnonymous/SMICEServers.h>
#import <MobileSDKAnonymous/SMCodecSet.h>
#import <MobileSDKAnonymous/SMCodecToReplace.h>
#import <MobileSDKAnonymous/SMICEOptions.h>
#import <MobileSDKAnonymous/SMSlowStartCallPolicy.h>
#import <MobileSDKAnonymous/SMAudioSessionConfiguration.h>
#import <MobileSDKAnonymous/SMAudioCodecConfiguration.h>

