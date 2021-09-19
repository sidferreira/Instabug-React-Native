module.exports = {
  dependency: {
    platforms: {
      ios: {},
      android: {
      },
    },
    hooks: {
      postlink: 'node node_modules/instabug-reactnative/link_bridge.js'
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