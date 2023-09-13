// noinspection JSUnnecessarySemicolon
;(function(config) {
    const path = require('path');
    const MiniCssExtractPlugin = require('mini-css-extract-plugin');

    const mokoResourcePath = path.resolve("/Users/thawzintoe/ComposeProjects/PMovie/shared/build/generated/moko/jsMain/comptutmovieappshared/res");

    config.module.rules.push(
        {
            test: /\.(.*)/,
            resource: [
                path.resolve(mokoResourcePath, "files"),
                path.resolve(mokoResourcePath, "images"),
                path.resolve(mokoResourcePath, "localization"),
            ],
            type: 'asset/resource'
        }
    );
    
    config.plugins.push(new MiniCssExtractPlugin())
    config.module.rules.push(
        {
            test: /\.css$/,
            resource: [
                path.resolve(mokoResourcePath, "fonts"),
            ],
            use: ['style-loader', 'css-loader']
        }
    )

    config.module.rules.push(
        {
            test: /\.(otf|ttf)?$/,
            resource: [
                path.resolve(mokoResourcePath, "fonts"),
            ],
            type: 'asset/resource',
        }
    )
    
    config.resolve.modules.push(mokoResourcePath);
})(config);