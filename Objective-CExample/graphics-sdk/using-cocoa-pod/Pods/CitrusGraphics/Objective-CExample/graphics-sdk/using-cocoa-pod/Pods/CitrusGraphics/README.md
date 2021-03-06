# Getting Started  

![CitrusPay logo](http://www.citruspay.com/images/logo.png "CitrusPay") 

## CitrusPay iOS SDK V 4.0.2

## Introduction
The CitrusPay iOS SDK enables collection of payments via various payment methods.

It is meant for consumption by [CitrusPay](http://www.citruspay.com) partners who are developing their own iOS apps aimed at merchants and/or consumers.

##Features
CitrusPay iOS SDK broadly offers following features.
+ Prepaid Payments.
+ Direct credit/debit card (CC, DC) or netbanking payments (NB) .
+ Saving Credit/Debit cards into user's account for easier future payments by abiding The Payment Card Industry Data Security Standard (PCI DSS).
+ Loading Money into users Citrus prepaid account for Prepaid facility .
+ Withdraw the money back into User's bank account from the Prepaid account .
+ Creating Citrus account for the user .

####[ChangeLog](https://github.com/citruspay/citruspay-ios-sdk/wiki/ChangeLog)

####[Migration from 3.0.x to 3.1.x or higher](https://github.com/citruspay/citruspay-ios-sdk/wiki/5-Migration-From-V-3.0.x-to-V-3.1.x)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements
+ Xcode 6 or higher.

###Citrus PG Prerequisites
+ You need to enroll with Citrus as a merchant.
+ You need to host Bill generator on your server
+ You need to host Return Url Page on your server. (After the transaction is complete, Citrus posts a response to this URL.)
+ Make sure that you have obtained following parameters from your Citrus admin panel
+ Merchant Secret Key
+ Merchant Access Key
+ SignIn Key
+ SignIn Secret
+ SignUp Key
+ SignUp Secret

Note: Please DO NOT PROCEED if the above mentioned requirements have not been met.

## Installation

#### Using [cocoapods](https://cocoapods.org/) (recommended)
+ The recommended installation mechanism for CitrusPay is via CocoaPods. CocoaPods is an Objective-C library dependency manager that streamlines the process of installing, configuring, and updating third-party libraries.
You can learn more about CocoaPods at the website: http://cocoapods.org/
+ Add `pod "CitrusPay"` to your podfile
+ Run `pod install`
+ You should now be able to add SDK to any of your target's source files and begin using CitrusPay SDK!
+ Using Swift `import CitrusPay` Or Objective-C `#import <CitrusPay/CitrusPay.h>`
+ Done!

#### Using Submodule
+ If you do not wish to use CocoaPods then the secondary recommendation is to use a submodule. This allows you to easily track updates using standard Git commands. The first step to installation is to add the submodule to your project:
~~~{.m}
$ cd /path/to/MyApplication
# If this is a new project, initialize git...
$ git init
$ git submodule add git://github.com/citruspay/citruspay-ios-sdk.git
$ git submodule update --init --recursive
$ open citruspay-ios-sdk
~~~
+ Navigate to "Framework" folder & drag "core-sdk" folder into your existing Xcode project
+ Select the target you wish to add "core-sdk" to
+ Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
+ Click the + and `CitrusPay.framework` appropriate to your target's platform
+ Then navigate to `General` tab and expand the `Embedded Binaries` section
+ Click the + and `CitrusPay.framework` appropriate to your target's platform
+ Add dependency 
    1. Download the JSONModel repository as a [zip file](https://github.com/icanzilb/JSONModel/archive/master.zip) or clone it
    2. Copy the JSONModel folder into your Xcode project finder
    3. Drag the `JSONModel.xcodeproj` from sub-folder into your Xcode project (i.e using direct project dependency)
    4. Select the target you wish to add "JSONModel" to
    5. Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
    6. Click the + and `JSONModel.framework` appropriate to your target's platform
    7. Then navigate to `General` tab and expand the `Embedded Binaries` section
    8. Click the + and `JSONModel.framework` appropriate to your target's platform
    9. Link your app to SystemConfiguration.framework
+ You should now be able to add SDK to any of your target's source files and begin using CitrusPay SDK!
+ Using Swift `import CitrusPay` Or Objective-C `#import <CitrusPay/CitrusPay.h>`
+ Done!


#### Using Library Binaries (manual way)
+ Download the latest zip file from our [releases page](https://github.com/citruspay/citruspay-ios-sdk/releases) or as a direct [download latest release](https://github.com/citruspay/citruspay-ios-sdk/releases/download/4.0.2/Framework.zip)
+ Unzip the file
+ Or clone it 
~~~{.m}
$ git clone --recursive https://github.com/citruspay/citruspay-ios-sdk.git
$ open citruspay-ios-sdk
~~~
+ Navigate to "Framework" folder & drag "core-sdk" folder into your existing Xcode project
+ In Xcode, go to your app's target settings. On the `Build Phases` tab, expand the `Link Binary With Libraries` section.
+ Include the following framework:
- `CitrusPay.framework`
+ In Xcode, go to your app's target settings. On the `General` tab, expand the `Embedded Binaries` section.
+ Include the following framework:
- `CitrusPay.framework`
+ Add dependency 
    1. Download the JSONModel repository as a [zip file](https://github.com/icanzilb/JSONModel/archive/master.zip) or clone it
    2. Copy the JSONModel folder into your Xcode project finder
    3. Drag the `JSONModel.xcodeproj` from sub-folder into your Xcode project (i.e using direct project dependency)
    4. Select the target you wish to add "JSONModel" to
    5. Navigate to `Build Phases` tab and expand the `Link Binary With Libraries` section
    6. Click the + and `JSONModel.framework` appropriate to your target's platform
    7. Then navigate to `General` tab and expand the `Embedded Binaries` section
    8. Click the + and `JSONModel.framework` appropriate to your target's platform
    9. Link your app to SystemConfiguration.framework
+ You should now be able to add SDK to any of your target's source files and begin using CitrusPay SDK!
+ Using Swift `import CitrusPay` Or Objective-C `#import <CitrusPay/CitrusPay.h>`
+ Done!

## Documentation
HTML documentation is hosted on our [CitrusPay Developer Guide](http://developers.citruspay.com/ios/iosReg.html).

Git Wiki documentation is available on the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki).

## SDK Organization

### CitrusPay.h
`CitrusPay.h` is the starting point for consuming the SDK, and contains the primary class you will interact with.
It exposes all the methods you can call to accept payments via the supported payment methods.
Detailed reference documentation is available on the reference page for the `CitrusPay` class.

### Data Models
All other classes in the SDK are data models that are used to exchange data between your app and the SDK. 
Detailed reference documentation is available on the reference page for each class.

## Next Steps
Head over to the [Git Wiki Documentation](https://github.com/citruspay/citruspay-ios-sdk/wiki) to see all the API methods available.
When you are ready, look at the samples below to learn how to interact with the SDK.

## Samples

See the [Objective-C Example app](https://github.com/citruspay/citruspay-ios-sdk/tree/master/Objective-CExample) and [Swift Example app](https://github.com/citruspay/citruspay-ios-sdk/tree/master/SwiftExample) for a working implementation of all API methods.

Note: make sure to open the project using `CitrusPay.xcworkspace` and not `CitrusPay.xcodeproj` for Cocoa-Pod Example.

### Initializing the SDK

+ Complete the installation steps (above).

Swift
+ Include CitrusPay
~~~{.m}
import CitrusPay
~~~

Objective-C
+ Include CitrusPay.h
~~~{.m}
#import <CitrusPay/CitrusPay.h>
~~~

####How to configure KeyStore Object
As you must have noticed the SDK initialization requires you to pass the Keystore object please see below how to configure it.     

~~~{.m}
CTSKeyStore *keyStore = [[CTSKeyStore alloc] init];
keyStore.signinId = @"test-signin";
keyStore.signinSecret = @"52f7e15efd4208cf5345dd554443fd99";
keyStore.signUpId = @"test-signup";
keyStore.signUpSecret = @"c78ec84e389814a05d3ae46546d16d2e";
keyStore.vanity = @"testing";
~~~

####Setup working Enviroments

SDK operates in two different modes Sandbox and Production mode. for both the enviroments Citrus PG Prerequisites key sets are different. keys from one enviroment won't work on other. so please make sure you are using correct set of keys.
During the developement you would always want to use the Sandbox mode. once you are done with your App development you can switch to production mode . 

you need to use `[CitrusPaymentSDK initializeWithKeyStore: environment:]` to initialize the SDK

Sandbox:
~~~{.m}
[CitrusPaymentSDK initializeWithKeyStore:keyStore environment:CTSEnvSandbox];
~~~

Production:
~~~{.m}
[CitrusPaymentSDK initializeWithKeyStore:keyStore environment:CTSEnvProduction];
~~~

Only after you are done with initialization you can proceed with following guide 

The SDK is logically divided into 3 modules/layers or interfacing classes
+ CTSAuthLayer - handles all of the user creation related tasks .
+ CTSProfileLayer - handles all of the user profile related tasks .
+ CTSPaymentLayer - handles all of the payment related tasks .

To use any of the above layers your need to fetch their singlton instance from CitrusPaymentSDK's class methods,

~~~{.m}
// initialization in your .m file
CTSAuthLayer * authLayer = [CTSAuthLayer fetchSharedAuthLayer];
CTSProfileLayer * proifleLayer = [CTSProfileLayer fetchSharedProfileLayer];
CTSPaymentLayer * paymentLayer = [CTSPaymentLayer fetchSharedPaymentLayer];
~~~

### Enable DEBUG Logs ( By Default it's Disable Logs )

+ Print Console logs
~~~{.m}
[CitrusPaymentSDK enableDEBUGLogs];
~~~

### Get the Card's Schemes & Bank Logo Images

+ Get the Card's Schemes Images
~~~{.m}
UIImage* image = [CTSUtility fetchSchemeImageBySchemeType:@"scheme" forParentView:self.view];
~~~

+ Get the Bank Logo Images by Issure Code
~~~{.m}
UIImage* image = [CTSUtility fetchBankLogoImageByBankIssuerCode:@"code" forParentView:self.view];
~~~

+ Get the Bank Logo Images by Bank Name
~~~{.m}
UIImage* image = [CTSUtility fetchBankLogoImageByBankName:@"bank" forParentView:self.view];
~~~


Following are the specific tasks related to each of the layer 

#[Important Update for iOS 9](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#ios-9-ssl-errors--fix)

#####Doing direct payments
+ [CC, DC, NB Direct Payments](https://github.com/citruspay/citruspay-ios-sdk/wiki/Standard-Payment)
+ [Saved CC, DC Payments (A.K.A. Tokenized payments)](https://github.com/citruspay/citruspay-ios-sdk/wiki/Saved-Card-Payments#payment-using-saved-payment-instruments-aka-tokenized-payments)

#####User Management

+ [User Creation/Authentication Flow](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#citrus-wallet-user-creation)
+  [See if anyone is logged in](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#see-if-anyone-is-logged-in)
+ [Reset User Password](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#reset-user-password)
+ [Sign Out](https://github.com/citruspay/citruspay-ios-sdk/wiki/1.--Integrating-CTSAuthLayer#sign-out)

#####Card Management
+ [Save User Cards](https://github.com/citruspay/citruspay-ios-sdk/wiki/Saved-Card-Payments#update--store-users-payment-information)
+ [Get Saved Cards](https://github.com/citruspay/citruspay-ios-sdk/wiki/Saved-Card-Payments#get-wallet--request-payment-information)
+ [Delete Saved Cards](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#delete-saved-cards)

#####Using Citrus Cash a.k.a Prepaid Account
+ [Get User's Citrus Cash Balance](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#get-users-prepaid-balance)
+ [Loading Money into Users Citrus Cash Account](https://github.com/citruspay/citruspay-ios-sdk/wiki/Wallet-Payments#load-money-into-users-citrus-prepaid-account)
+ [Paying via Citrus Cash account](https://github.com/citruspay/citruspay-ios-sdk/wiki/Wallet-Payments#payment-using-prepaid-citrus-cash-if-the-prepaid-balance-is-sufficient)
+ [Save Cashout Bank Account](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#save-cash-out-bank-account)
+ [Get Saved Cashout Bank Acoount](https://github.com/citruspay/citruspay-ios-sdk/wiki/2.--Integrating-CTSProfileLayer#get-saved-cashout-bank-acoount)
+ [Initiate Cashout Proccess into users Bank Account from Citrus Cash  account](https://github.com/citruspay/citruspay-ios-sdk/wiki/3.--Integrating-CTSPaymentLayer#initiate-cashout-process-into-users-account-from-citrus-prepaid-account)
+ [Send Citrus Cash to another Citrus User](https://github.com/citruspay/citruspay-ios-sdk/wiki/3.--Integrating-CTSPaymentLayer#send-money-to-another-citrus-user)

#####Dynamic Pricing Offer Coupons and Surcharge
+ [How to use dynamic pricing ?](https://github.com/citruspay/citruspay-ios-sdk/wiki/Dynamic-Pricing-and-Surcharge)

#####One Tap Payment
+ [What is One Tap Payment? ](https://github.com/citruspay/citruspay-ios-sdk/wiki/One-Tap-Payment)


#####Others
+ [Fetch Available Schemes and Banks for the Merchant and for Load Money in Citrus Cash](https://github.com/citruspay/citruspay-ios-sdk/wiki/3.--Integrating-CTSPaymentLayer#fetch-available-schemes-and-banks-for-the-merchant-and-for-load-money)

=====
####[Common Integration Issues](https://github.com/citruspay/open-ios/wiki/4.-Common-Errors)
+ [Could Not Connect to Internet](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#could-not-connect-to-internet)
+ [postResponseiOS() error](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#postresponseios-error)
+ [iOS 9 SSL Errors](https://github.com/citruspay/citruspay-ios-sdk/wiki/4.-Common-Errors#ios-9-ssl-errors--fix)

#[Important Instructions for the Releasing to Apple](https://github.com/citruspay/citruspay-ios-sdk/wiki/Releasing-to-Apple)
