//
//  Network.h
//  RestKit
//
//  Created by Blake Watters on 9/30/10.
//  Copyright (c) 2009-2012 RestKit. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Availability.h>

#define _AFNETWORKING_PIN_SSL_CERTIFICATES_

#if __IPHONE_OS_VERSION_MIN_REQUIRED
  #import <SystemConfiguration/SystemConfiguration.h>
  #import <MobileCoreServices/MobileCoreServices.h>
  #import <Security/Security.h>
#else
  #import <SystemConfiguration/SystemConfiguration.h>
  #import <CoreServices/CoreServices.h>
  #import <Security/Security.h>
#endif

#import "RKRoute.h"
#import "RKRouteSet.h"
#import "RKRouter.h"
#import "RKRequestDescriptor.h"
#import "RKResponseDescriptor.h"
#import "RKObjectManager.h"
#import "RKHTTPUtilities.h"
#import "RKObjectRequestOperation.h"
#import "RKObjectParameterization.h"
#import "RKPathMatcher.h"

#ifdef _COREDATADEFINES_H
#import "RKManagedObjectRequestOperation.h"
#endif
