# react-native-ramaera-location

ramaera location library

## Installation

```sh
npm install react-native-ramaera-location
```

## Setup
declare service in manifest.xml file 

```xml
 <service android:name="com.ramaeralocation.services.RamaeraLocationService"
        android:enabled="true"
        android:exported="true"/>
// ...



## Usage


```js
import { startLocation, stopLocation } from 'react-native-ramaera-location';
import {  DeviceEventEmitter } from 'react-native';


  const startListeningLocation = () => {
    DeviceEventEmitter.addListener('location',async  function (e: Event) {
      //@ts-ignore
      await sendLocation(e.latitude,e.longitude)

    });
  }




//

const result = await multiply(3, 7);
```

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
