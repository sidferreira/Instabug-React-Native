module.exports = {
  dependency: {
    platforms: {
      ios: {
        scriptPhases: [
          {
            name: `[@instabug/react-native] Upload Sourcemap`,
            script: `bash "../node_modules/@instabug/react-native/ios/upload_sourcemap.sh"`,
            execution_position: 'after_compile',
          },
        ],
      },
      android: {
      },
    },
    hooks: {
      postlink: `node node_modules/@instabug/react-native/link_bridge.js`
    },
  },
  commands: [
    {
      name: 'add-instabug',
      func: () => {
                    require('./link_gradle');
                  },
    },
    {
      name: 'remove-instabug',
      func: () => {
                    require('./unlink_gradle');
                  },
    },
  ],
};